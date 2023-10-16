SUMMARY = "Basic sample code for piracer"
LICENSE = "CLOSED"

SRC_URI = "file://forward_backward_left_right.py"

DEPENDS += " \
        python3 \
        python3-piracer-py\
        "

do_install() {
    install -d ${D}{bindir}/example
    install -m 0755 forward_backward_left_right.py ${D}${bindir}/example/
}

FILES:{PN} += "/example"
