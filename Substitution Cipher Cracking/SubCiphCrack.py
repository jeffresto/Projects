def decrypt(text, mapping):
    result = ""
    for c in text:
        if c in mapping:
            result += mapping[c]
        else:
            result += c
    return result

def main():
    cryptText = (
        "lrvmnir bpr sumvbwvr jx bpr lmiwv yjeryrkbi jx qmbm wi "
        "bpr xjvni mkd ymibrut jx irhx wi bpr riirkvr jx "
        "ymbinlmtmipw utn qmumbr dj w ipmhh but bj rhnvwdmbr bpr "
        "yjeryrkbi jx bpr qmbm mvvjudwko bj yt wkbrusurbmbwjk "
        "lmird jk xjubt trmui jx ibndt "
        "wb wi kjb mk rmit bmiq bj rashmwk rmvp yjeryrkb mkd wbi "
        "iwokwxwvmkvr mkd ijyr ynib urymwk nkrashmwkrd bj ower m "
        "vjyshrbr rashmkmbwjk jkr cjnhd pmer bj lr fnmhwxwrd mkd "
        "wkiswurd bj invp mk rabrkb bpmb pr vjnhd urmvp bpr ibmbr "
        "jx rkhwopbrkrd ywkd vmsmlhr jx urvjokwgwko ijnkdhrii "
        "ijnkd mkd ipmsrhrii ipmsr w dj kjb drry ytirhx bpr xwkmh "
        "mnbpjuwbt lnb yt rasruwrkvr cwbp qmbm pmi hrxb kj djnlb "
        "bpmb bpr xjhhjcwko wi bpr sujsru msshwvmbwjk mkd "
        "wkbrusurbmbwjk w jxxru yt bprjuwri wk bpr pjsr bpmb bpr "
        "riirkvr jx jqwkmcmk qmumbr cwhh urymwk wkbmvb "
    )

    mapping = {
        'r': 'E', 'b': 'T', 'm': 'A', 'k': 'N', 'j': 'O', 'w': 'I', 'i': 'S',
        'p': 'H', 'u': 'R', 'd': 'D', 'h': 'L', 'v': 'C', 'x': 'F', 'y': 'M',
        'n': 'U', 's': 'P', 't': 'Y', 'l': 'B', 'o': 'G', 'q': 'K', 'c': 'W',
        'e': 'V', 'a': 'X', 'f': 'Q', 'g': 'Z', 'z': 'z'
    }

    decryptedText = decrypt(cryptText, mapping)
    print("Decrypted text:")
    print(decryptedText)

if __name__ == "__main__":
    main()
