int __fastcall task_intro_4(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r3@1
  int *v3; // r1@2
  int v4; // r0@2
  int v5; // r0@2
  int v6; // r0@2
  unsigned __int8 v7; // r0@3
  int v9; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = dword_3005ED0;
  if ( (unsigned int)dword_3005ED0 > 0x387 )
  {
    if ( (unsigned int)dword_3005ED0 > 0x3EF )
    {
      BeginNormalPaletteFade(-1, 0, 0, 0x10u, -1);
      dword_3004B20[10 * v1] = (int)sub_813BEEC;
    }
  }
  else
  {
    v3 = &dword_3004B20[10 * a1];
    v4 = (*((_WORD *)v3 + 5) << 16) + *((_WORD *)v3 + 6) - 49152;
    *((_WORD *)v3 + 5) = HIWORD(v4);
    *((_WORD *)v3 + 6) = v4;
    v400001A = HIWORD(v4);
    v5 = (*((_WORD *)v3 + 7) << 16) + *((_WORD *)v3 + 8) - 0x10000;
    *((_WORD *)v3 + 7) = HIWORD(v5);
    *((_WORD *)v3 + 8) = v5;
    v4000016 = HIWORD(v5);
    v6 = (*((_WORD *)v3 + 9) << 16) + *((_WORD *)v3 + 10) - 98304;
    *((_WORD *)v3 + 9) = HIWORD(v6);
    *((_WORD *)v3 + 10) = v6;
    v4000012 = HIWORD(v6);
    if ( v2 == 880 )
    {
      v7 = CreateSprite((int)"Ò\aÒ\aÜ¯@\bì¯@\b", 200, 160);
      gSprites[68 * v7 + 62] |= 4u;
    }
  }
  return v9;
}
