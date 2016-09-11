int __fastcall sub_804FB1C(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned int v2; // r2@1
  int *v3; // r2@3
  unsigned int v4; // r2@5
  __int16 *v5; // r1@10
  signed __int16 v6; // r0@10
  int *v7; // r1@16
  signed __int16 v8; // r0@16
  int v10; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = ((*(_WORD *)(dword_3004854 + 84) + 6144) & 0xFFFFu) >> 8;
  if ( v2 <= (unsigned int)(unsigned __int8)gUnknown_08216303[*(_BYTE *)(dword_3004854 + 168)] + 20
    || v2 >= (unsigned int)(unsigned __int8)gUnknown_08216303[*(_BYTE *)(dword_3004854 + 168)] + 40 )
  {
    v7 = &dword_3004B20[10 * a1];
    v8 = 0;
    goto _0804FC3C;
  }
  v3 = &dword_3004B20[10 * a1];
  if ( !*((_WORD *)v3 + 4) )
  {
    if ( !*(_BYTE *)(dword_3004854 + 331) )
    {
      v4 = (unsigned __int16)Random() / 0x28Fu & 0xFF;
      if ( (signed int)*(_WORD *)(dword_3004854 + 86) <= 499 )
      {
        if ( v4 <= 0x58 )
          word_3002A36 = 21554;
        else
          word_3002A36 = 17699;
_0804FC02:
        v7 = &dword_3004B20[10 * v1];
        v8 = 1;
_0804FC3C:
        *((_WORD *)v7 + 4) = v8;
        return v10;
      }
      if ( v4 <= 0x3C )
      {
        if ( ((v4 - 56) & 0xFF) > 4 )
          goto _0804FBF6;
        v5 = gRecvCmds;
        v6 = 21554;
      }
      else
      {
        v5 = gRecvCmds;
        v6 = 17699;
      }
      v5[11] = v6;
_0804FBF6:
      if ( v4 <= 4 )
        sub_804F890(3u, 5u);
      goto _0804FC02;
    }
    word_3002A36 = 17699;
    *((_WORD *)v3 + 4) = 1;
  }
  return v10;
}
