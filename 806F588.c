int __fastcall sub_806F588(unsigned __int8 a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  if ( !(v202F38F & 0x80) )
  {
    dword_3004B20[10 * a1] = (int)TaskDummy;
    sub_806E8D0(a1, v203855E, (int)sub_808B508);
    StringCopy(&gStringVar2, &gMoveNames[13 * v201C008]);
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)"Нигд");
    sub_806E834((int)&gStringVar4, 1u);
    CreateTask(sub_806F67C, 5);
  }
  return v2;
}
