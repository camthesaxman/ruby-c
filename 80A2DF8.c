int __fastcall sub_80A2DF8(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r2@1
  char v6; // [sp+0h] [bp-10h]@2
  char v7; // [sp+1h] [bp-Fh]@2
  char v8; // [sp+4h] [bp-Ch]@2
  int v9; // [sp+Ch] [bp-4h]@3

  v3 = a1;
  if ( sub_80A2B94(a1, a2, a3) << 24 )
  {
    *(_WORD *)(36 * (unsigned __int8)GetMonData(v3, 64, v4) + 0x20282A0) = 0;
    v8 = -1;
    v6 = 0;
    v7 = 0;
    SetMonData(v3, 64, (int)&v8);
    SetMonData(v3, 12, (int)&v6);
  }
  return v9;
}
