int __fastcall sub_8142A28(unsigned __int8 a1)
{
  int v1; // r5@1
  signed int v2; // r2@3
  unsigned int v3; // r3@3
  int *v4; // r0@7
  signed __int16 v5; // r1@7
  unsigned int v6; // r3@9
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)sub_8125EC8(3) != 1 )
  {
    dword_3004B20[10 * v1] = (int)sub_8142FEC;
    return v8;
  }
  v2 = 33677312;
  v3 = 0;
  if ( v201E008 & 0x1FF )
  {
    while ( 1 )
    {
      v3 = (v3 + 1) & 0xFFFF;
      v2 += 120;
      if ( v3 > 0x31 )
        break;
      if ( !(*(_WORD *)(v2 + 8) & 0x1FF) )
        goto _08142A7E;
    }
  }
  else
  {
_08142A7E:
    if ( v3 <= 0x31 )
    {
      v4 = &dword_3004B20[10 * v1];
      v5 = v3 - 1;
      goto _08142AA0;
    }
  }
  v4 = &dword_3004B20[10 * v1];
  v5 = 49;
_08142AA0:
  *((_WORD *)v4 + 4) = v5;
  HIWORD(dword_3004B20[10 * v1 + 2]) = sub_8053108(0xAu);
  v6 = 0;
  do
  {
    *(_WORD *)(2 * v6 + 0x600381A) = v6 + 3;
    *(_WORD *)(2 * v6 + 0x600385A) = v6 + 20;
    v6 = (v6 + 1) & 0xFFFF;
  }
  while ( v6 <= 0x10 );
  SetUpWindowConfig((int)&gWindowConfig_81E7198);
  InitMenuWindow();
  dword_3004B20[10 * v1] = (int)sub_8142B04;
  return v8;
}
