int __fastcall GetMonAbility(int a1)
{
  int v1; // r5@1
  int v2; // r4@1
  unsigned __int8 v3; // r0@1

  v1 = a1;
  v2 = (unsigned __int16)GetMonData(a1, 11, 0);
  v3 = GetMonData(v1, 46, 0);
  return (unsigned __int8)sub_803DB14(v2, v3);
}
