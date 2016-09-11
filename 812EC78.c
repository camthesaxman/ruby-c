int __fastcall sub_812EC78(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r5@1
  int v3; // r1@1
  __int16 v4; // r0@2
  __int16 v5; // r0@5
  int v6; // r0@7
  signed __int16 v7; // r0@8
  int v9; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | ((*(_WORD *)(v1 + 4) & 0x3FF)
                                                    + ((unsigned __int16)Random() % 0xCu & 0xFF)) & 0x3FF;
  v2 = Random() & 0x1FF;
  v3 = (unsigned __int8)Random();
  if ( v2 & 1 )
    v4 = v2 + 1504;
  else
    v4 = 1504 - v2;
  *(_WORD *)(v1 + 46) = v4;
  if ( v3 & 1 )
    v5 = v3 + 1152;
  else
    v5 = 1152 - v3;
  *(_WORD *)(v1 + 48) = v5;
  v6 = (unsigned __int16)word_3004B00[0];
  *(_WORD *)(v1 + 50) = word_3004B00[0];
  if ( v6 << 16 )
    v7 = 248;
  else
    v7 = -8;
  *(_WORD *)(v1 + 32) = v7;
  *(_WORD *)(v1 + 34) = 104;
  *(_DWORD *)(v1 + 28) = sub_812ED24;
  return v9;
}
