int sub_8133800()
{
  unsigned int v0; // r6@1
  _BYTE *v1; // r3@1
  signed int v2; // r8@1
  _BYTE *v3; // r0@3
  int v4; // r5@6
  int v5; // r3@7
  int v6; // r4@7
  int v7; // r0@9
  int v9; // [sp+1Ch] [bp-4h]@0

  v0 = *(_BYTE *)(dword_30007B0 + 25);
  v1 = (_BYTE *)33788768;
  v2 = 2;
  do
  {
    if ( v0 < *(_BYTE *)(dword_30007B0 + 26) )
    {
      if ( v0 == *(_BYTE *)(dword_30007B0 + 26) - 1 )
      {
        v3 = (_BYTE *)sub_8072C74((int)v1, (int)&UnknownText_Exit, 0x90u, 0);
      }
      else
      {
        v4 = *(_WORD *)(dword_30007B0 + 32 + 2 * v0);
        if ( *(_BYTE *)(dword_30007B0 + 708) )
        {
          v5 = sub_8072C74(
                 (int)v1,
                 *(int *)((char *)&gUnknown_083CAF70 + (4 * gContestMoves[8 * v4 + 1] & 0x1F)),
                 0x27u,
                 0);
          v6 = 2 * v4;
        }
        else
        {
          v6 = 2 * v4;
          v5 = sub_8072C74((int)v1, (int)&gTypeNames[7 * gBattleMoves[12 * v4 + 2]], 0x27u, 0);
        }
        v7 = sub_8072C74(v5, dword_30007B0 + 25 * v0 + 82, 0x72u, 0);
        *(_BYTE *)v7 = -54;
        *(_BYTE *)(v7 + 1) = -54;
        *(_BYTE *)(v7 + 2) = -70;
        v3 = (_BYTE *)sub_8072C14(v7 + 3, gBattleMoves[4 * (v6 + v4) + 4], 0x90u, 0);
      }
    }
    else
    {
      v3 = (_BYTE *)sub_8072C74((int)v1, (int)&gEmptyString_81E72B0, 0x90u, 0);
    }
    *v3 = -2;
    v1 = v3 + 1;
    v0 = (v0 + 1) & 0xFF;
    --v2;
  }
  while ( v2 >= 0 );
  *v1 = -1;
  MenuPrint(33788768, 11, 1u);
  sub_813360C(0);
  return v9;
}
