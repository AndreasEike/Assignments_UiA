from OpenSSL import crypto, SSL
KEY_SIZE = 4096

def write_to_file(data, filename):
    file = open(filename, "wb")
    file.write(data)
    file.close()

def create_public_key_pair(keyFile):
    k=crypto.PKey()
    k.generate_key(crypto.TYPE_RSA, KEY_SIZE)
    keyToByte = crypto.dump_privatekey(crypto.FILETYPE_PEM, k)
    write_to_file(keyToByte, keyFile)
    return k

def create_self_signed_cert(certFile, key):
    cert = crypto.X509()
    cert.set_serial_number(1001)
    cert.set_notBefore(b"20190101000000Z")
    cert.set_notAfter(b"20290101000000Z")

    subject = cert.get_subject()
    subject.C = "NO"
    subject.ST = "Rogaland"
    subject.L = "Kolnes"
    subject.O = "UiA"
    subject.OU = "ICT"
    subject.CN = "localhost"

    cert.set_issuer(subject)
    cert.set_pubkey(key)
    cert.sign(key, 'SHA256')

    certToByte = crypto.dump_certificate(crypto.FILETYPE_PEM, cert)
    write_to_file(certToByte, certFile)
    return cert



if __name__ == "__main__":
    k = create_public_key_pair("example.key")
    cert = create_self_signed_cert("example.crt", k)
    print("Certificate and key created in working directory.")
