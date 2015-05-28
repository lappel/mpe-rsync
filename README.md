# mpe-rsync
https://rsync.samba.org for MPE/iX

Here is an example rsync server job ...

    :PRINT /var/tmp/rs.job
    
    !job rsyncj,lars.appel
    !setvar prog "/APPEL/PUB/local/rsync/bin/rsync" 
    !setvar args "--daemon --no-detach --port=3000 --config=/var/tmp/rs.cfg" 
    !xeq !prog "!args" 
    !eoj

... and config file ...

    :PRINT /var/tmp/rs.cfg
    
     log file = /var/tmp/rs.log
     
    [tmp]
     path = /tmp
     use chroot = no
     read only = no

Note that the above example has no security for target _host::tmp_ !!
