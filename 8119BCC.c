int __fastcall sub_8119BCC(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  signed int v3; // kr00_4@3
  int v5; // [sp+0h] [bp-20h]@1
  char v6; // [sp+4h] [bp-1Ch]@1
  _BYTE v7[3]; // [sp+5h] [bp-1Bh]@5
  int v8; // [sp+1Ch] [bp-4h]@10

  v1 = a1;
  memcpy(&v5, (const char *)&gUnknown_083FA64A, 2);
  memcpy(&v6, (const char *)&gUnknown_083FA64C, 16);
  v2 = *(_WORD *)(v1 + 48);
  *(_WORD *)(v1 + 48) = v2 - 1;
  if ( v2 <= 7 )
  {
    if ( (v2 - 1) & 0x8000 )
    {
      m4aSongNumStartOrChange(94);
      if ( *(_WORD *)(v2019038 + 46) )
        cry_related(0x130u, -63);
      else
        cry_related(0x130u, 63);
      StartSpriteAnim(v1, *(_WORD *)(v2019038 + 46) + 2);
      *(_WORD *)(v1 + 48) = 45;
      *(_DWORD *)(v1 + 28) = sub_8119B24;
    }
    else
    {
      *(_WORD *)(v1 + 32) += *(&v6 + 2 * (7 - *(_WORD *)(v1 + 48))) * *((_BYTE *)&v5 + *(_WORD *)(v2019038 + 46));
      *(_WORD *)(v1 + 34) += v7[2 * (7 - *(_WORD *)(v1 + 48))];
    }
  }
  else
  {
    *(_WORD *)(v1 + 32) += 2 * *((_BYTE *)&v5 + *(_WORD *)(v2019038 + 46));
    if ( mplay_has_finished_maybe() << 24 )
    {
      v3 = 116 - *(_WORD *)(v1 + 32);
      m4aMPlayPanpotControl(&unk_30073C0, 0xFFFF, (char)(v3 / -2));
      m4aMPlayPanpotControl(&unk_3007400, 0xFFFF, (char)(v3 / -2));
    }
  }
  return v8;
}
