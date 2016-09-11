int __fastcall sub_80CBBF0(int a1)
{
  int v1; // r4@1
  __int16 *v2; // r5@3
  int v3; // r1@4
  signed int v4; // r2@4
  __int16 v5; // r0@7
  char *v6; // r1@8
  char v7; // r0@8
  int v9; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 46) )
  {
    if ( sub_8076BE0() << 24 )
    {
      v3 = word_3004B02 - 32;
      v4 = v3;
      v2 = word_3004B00;
      if ( v3 < 0 )
        v4 = word_3004B02 + 223;
      *(_WORD *)(v1 + 48) = v3 - ((unsigned __int16)(v4 >> 8) << 8);
      *(_WORD *)(v1 + 32) = 70;
    }
    else
    {
      *(_WORD *)(v1 + 48) = word_3004B02;
      *(_WORD *)(v1 + 32) = 120;
      v2 = word_3004B00;
    }
    v5 = *v2;
    *(_WORD *)(v1 + 34) = *v2;
    *(_WORD *)(v1 + 50) = v5;
    *(_WORD *)(v1 + 54) = 20;
    *(_WORD *)(v1 + 36) = cosine(*(_WORD *)(v1 + 48), 60);
    *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 48), 20);
    *(_DWORD *)(v1 + 28) = sub_80CBC8C;
    if ( ((*(_WORD *)(v1 + 48) - 1) & 0xFFFFu) > 0xBE )
    {
      v6 = (char *)(v1 + 67);
      v7 = 29;
    }
    else
    {
      v6 = (char *)(v1 + 67);
      v7 = 31;
    }
    *v6 = v7;
  }
  return v9;
}
