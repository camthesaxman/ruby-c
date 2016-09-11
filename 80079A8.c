int __fastcall BuildSendCmd(unsigned __int16 a1)
{
  int v1; // r2@1
  signed int v2; // r0@6
  __int16 *v3; // r0@23
  __int16 v4; // r1@23
  int v5; // r1@26
  int v7; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( a1 == 26214 )
  {
    v3 = gSendCmd;
    v4 = 0;
    goto LABEL_36;
  }
  if ( (signed int)a1 <= 26214 )
  {
    if ( a1 == 17476 )
    {
      v3 = gSendCmd;
      gSendCmd[0] = 17476;
      v4 = word_300179C;
      goto LABEL_37;
    }
    if ( (signed int)a1 <= 17476 )
    {
      if ( a1 != 8738 )
      {
        v2 = 12286;
        goto LABEL_11;
      }
      v3 = gSendCmd;
      gSendCmd[0] = 8738;
      v4 = gLinkType;
LABEL_37:
      v3[1] = v4;
      return v7;
    }
    if ( a1 == 21862 )
    {
LABEL_32:
      gSendCmd[0] = v1;
      return v7;
    }
    if ( (signed int)a1 > 21862 )
      v2 = 24575;
    else
      v2 = 21845;
LABEL_11:
    if ( v1 != v2 )
      return v7;
    goto LABEL_32;
  }
  if ( a1 == 43691 )
  {
    v3 = gSendCmd;
    gSendCmd[0] = -21845;
    v4 = v203855E;
    goto LABEL_37;
  }
  if ( (signed int)a1 > 43691 )
  {
    if ( a1 != 51966 )
    {
      if ( (signed int)a1 > 51966 )
      {
        if ( a1 != 52428 )
          return v7;
        v3 = gSendCmd;
        gSendCmd[0] = -13108;
        v4 = (unsigned __int8)gBlockRequestType;
        goto LABEL_37;
      }
      if ( a1 == 48059 )
      {
        gSendCmd[0] = -17477;
        word_3002F92 = word_30003EA;
        word_3002F94 = (unsigned __int8)byte_30003F1 + 128;
      }
      return v7;
    }
    v4 = word_3004858;
    if ( !word_3004858 || gUnknown_3001764 )
      return v7;
    v3 = gSendCmd;
LABEL_36:
    *v3 = v1;
    goto LABEL_37;
  }
  if ( a1 != 30583 )
  {
    v2 = 43690;
    goto LABEL_11;
  }
  gSendCmd[0] = 30583;
  v5 = 0;
  do
  {
    gSendCmd[++v5] = 238;
    v5 = (unsigned __int8)v5;
  }
  while ( (unsigned __int8)v5 <= 4u );
  return v7;
}
