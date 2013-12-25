#include <stdio.h>
#define _GNU_SOURCE
#include <unistd.h>

int main(void) {
    uid_t ruid;
    uid_t euid;
    uid_t suid;

    gid_t rgid;
    gid_t egid;
    gid_t sgid;

    getresuid(&ruid, &euid, &suid);
    getresgid(&rgid, &egid, &sgid);

    printf(
        "         UID           GID  \n"
        "Real      %d  Real      %d  \n"
        "Effective %d  Effective %d  \n"
        "Saved     %d  Saved     %d  \n",
        ruid, rgid, euid, egid, suid, sgid
    );
}
