int __fastcall DeleteFirstMoveAndGiveMoveToMon(int a1, unsigned __int16 a2)
{
  int v2; // r6@1
  int v3; // r8@1
  signed int v4; // r4@1
  int *v5; // r5@1
  signed int v6; // r4@3
  int *v7; // r5@3
  int v9; // [sp+0h] [bp-8h]@1
  __int16 v10; // [sp+6h] [bp-2h]@3
  int v11; // [sp+8h] [bp+0h]@2
  char v12; // [sp+Ch] [bp+4h]@3
  _BYTE savedregs[28]; // [sp+10h] [bp+8h]@5

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = &v9;
  do
  {
    *(_WORD *)v5 = GetMonData(v2, v4 + 14);
    *((_BYTE *)&v11 + v4) = GetMonData(v2, v4 + 18);
    v5 = (int *)((char *)v5 + 2);
    ++v4;
  }
  while ( v4 <= 2 );
  v12 = (unsigned __int8)GetMonData(v2, 21) >> 2;
  v10 = v3;
  BYTE3(v11) = gBattleMoves[12 * v3 + 4];
  v6 = 0;
  v7 = &v9;
  do
  {
    SetMonData(v2, v6 + 13, v7);
    SetMonData(v2, v6 + 17, (char *)&v11 + v6);
    v7 = (int *)((char *)v7 + 2);
    ++v6;
  }
  while ( v6 <= 3 );
  SetMonData(v2, 21, &v12);
  return *(_DWORD *)&savedregs[24];
}
