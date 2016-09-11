int __fastcall CalcCenterToCornerVec(int a1, int a2, int a3, char a4)
{
  int v4; // r2@1
  int v5; // r5@1
  int v6; // r1@1
  int v8; // [sp+Ch] [bp-4h]@0

  v4 = (2 * a3 & 0x1FF) + (8 * a2 & 0x7FF);
  v5 = sCenterToCornerVecTable[v4];
  v6 = sCenterToCornerVecTable[v4 + 1];
  if ( a4 & 2 )
  {
    v5 = 2 * v5 & 0xFF;
    v6 = 2 * v6 & 0xFF;
  }
  *(_BYTE *)(a1 + 40) = v5;
  *(_BYTE *)(a1 + 41) = v6;
  return v8;
}
