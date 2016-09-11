int __fastcall sub_80C9F10(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned __int16 v2; // r0@3
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E & 1 || word_300179E & 2 )
  {
    v2 = ItemIdToBattleMoveId(v203855E);
    StringCopy(&gStringVar1, &gMoveNames[13 * v2]);
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840EA27);
    DisplayItemMessageOnField(v1, &gStringVar4, sub_80C9F80, 1);
  }
  return v4;
}
