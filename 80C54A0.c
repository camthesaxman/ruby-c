int __fastcall sub_80C54A0(int a1, int a2, int a3)
{
  int v3; // r4@1
  unsigned __int8 v4; // r0@2

  v3 = (unsigned __int8)sub_80C5450(0xAFu, a2, a3);
  if ( v3 == 1 )
  {
    v4 = ItemIdToBerryType(175);
    GetBerryNameByBerryType(v4, (int)&gStringVar1);
  }
  return v3;
}
