int __fastcall sub_806A958(unsigned __int8 a1)
{
  int v1; // r6@1
  unsigned int v2; // r7@1
  char *v3; // r5@1
  int v4; // r4@1
  char *v5; // r2@1
  signed __int16 v6; // r0@2
  int v8; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = 40 * a1;
  v3 = &byte_3004B28[v2];
  v4 = byte_3004B28[v2 + 4];
  v5 = (char *)&gUnknown_08376414 + 12 * v4;
  if ( word_300179E & 2 )
  {
    dword_3004B20[v2 / 4] = (int)sub_806A92C;
    *((_WORD *)v3 + 1) = 0;
    v6 = 6;
_0806A9CC:
    *((_WORD *)v3 + 2) = v6;
    audio_play(5);
    return v8;
  }
  if ( word_300179E & 0x10 )
  {
    v6 = (unsigned __int8)v5[7];
    if ( v5[7] )
      goto _0806A9CC;
  }
  if ( word_300179E & 0x20 )
  {
    v6 = (unsigned __int8)v5[6];
    if ( v5[6] )
      goto _0806A9CC;
  }
  if ( v4 == 5 )
  {
    if ( word_300179E & 1 )
    {
      word_3004038 = *((_WORD *)v3 + 3);
      byte_300403A = *((_WORD *)v3 + 4);
      byte_300403B = *((_WORD *)v3 + 5);
      LOBYTE(dword_300403C) = *((_WORD *)v3 + 6);
      audio_play(5);
      dword_3004B20[10 * v1] = (int)sub_806A92C;
      *((_WORD *)v3 + 1) = 1;
      *((_WORD *)v3 + 2) = 6;
    }
  }
  else if ( sub_806A8AC(&v3[2 * (unsigned __int8)*v5], *((_WORD *)v5 + 1), *((_WORD *)v5 + 2), word_30017A0 & 0xC0) )
  {
    audio_play(5);
    sub_806A74C(4u, 9u, *((_WORD *)v3 + 3), v3[8], v3[10], v3[12]);
  }
  return v8;
}
