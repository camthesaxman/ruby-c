signed int __fastcall sub_805870C(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  unsigned __int8 v4; // r0@1
  signed int result; // r0@2

  v2 = a1;
  v3 = a2;
  v4 = MapGridGetMetatileBehaviorAt(a1, a2);
  if ( sub_8056EAC(v4) << 24 )
    result = (char)sub_805862C((int)&gDoorAnimGraphicsTable, v2, v3);
  else
    result = -1;
  return result;
}
