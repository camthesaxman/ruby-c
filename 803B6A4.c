int __fastcall SetMonMoveSlot(int a1, unsigned __int16 a2, unsigned __int8 a3)
{
  int v3; // r5@1
  int v4; // r4@1
  unsigned __int16 v6; // [sp+0h] [bp-10h]@1
  int v7; // [sp+Ch] [bp-4h]@1

  v3 = a1;
  v6 = a2;
  v4 = a3;
  SetMonData(a1, a3 + 13, &v6);
  SetMonData(v3, v4 + 17, (char *)&unk_81FB130 + 12 * v6);
  return v7;
}
