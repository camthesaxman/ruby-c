int sub_813B6A4()
{
  unsigned __int8 v0; // r6@1
  int v1; // r4@1
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = CreateTask((int)sub_813B4A0, 0);
  v1 = v201FE03;
  v201FE03 = sub_813AF3C();
  sub_813AF78();
  if ( v1 != v201FE03 && v201FE03 < v201FE01 + v201FE02 && v201FE02 )
    --v201FE02;
  sub_813A240(v0);
  sub_813B108();
  pal_fill_black();
  return v3;
}
