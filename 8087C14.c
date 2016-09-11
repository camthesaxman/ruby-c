int __fastcall sub_8087C14(int a1)
{
  int v1; // r4@1
  int *v2; // r5@1
  int v3; // r1@1
  int v5; // [sp+0h] [bp-14h]@1
  int v6; // [sp+10h] [bp-4h]@7

  v1 = a1;
  memcpy(&v5, &gUnknown_0839F380, 5);
  v2 = &dword_30048A0[9 * v202E85D];
  v3 = *(_WORD *)(v1 + 10);
  if ( !*(_WORD *)(v1 + 10) || (*(_WORD *)(v1 + 10) = v3 - 1, !((v3 - 1) << 16)) )
  {
    FieldObjectTurn((int)v2, *((_BYTE *)&v5 + (*((_BYTE *)v2 + 24) & 0xF)));
    *(_WORD *)(v1 + 10) = 8;
    ++*(_WORD *)(v1 + 12);
  }
  if ( (signed int)*(_WORD *)(v1 + 12) > 7 && *(_WORD *)(v1 + 38) == (*((_BYTE *)v2 + 24) & 0xF) )
  {
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 10) = 4;
    *(_WORD *)(v1 + 12) = 8;
    *(_WORD *)(v1 + 14) = 1;
    audio_play(0x2Du);
  }
  return v6;
}
