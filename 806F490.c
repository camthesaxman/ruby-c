int __fastcall sub_806F490(unsigned __int8 a1)
{
  int v1; // r0@2
  unsigned __int8 v2; // r0@2
  int v3; // r2@2
  int v4; // r4@2
  int v6; // [sp+8h] [bp-4h]@0

  if ( !(v202F38F & 0x80) )
  {
    dword_3004B20[10 * a1] = (int)TaskDummy;
    v1 = sub_806E8D0(a1, v203855E, (int)sub_808B508);
    v2 = sub_809FA30(v1);
    v4 = (unsigned __int16)GetMonData(v201C000, v2 + 13, v3);
    GetMonNickname(v201C000, (int)&gStringVar1);
    StringCopy(&gStringVar2, &gMoveNames[13 * v4]);
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F44B);
    sub_806E834((int)&gStringVar4, 1u);
    CreateTask(sub_806F53C, 5);
  }
  return v6;
}
