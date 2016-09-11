int __fastcall sub_80A65AC(unsigned __int8 a1)
{
  int v1; // r5@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(7u, 6u, 0xDu, 0xCu);
  sub_80A36B8((int)gBG1TilemapBuffer, 7u, 6, 6u, 6u);
  itemid_copy_name(v203855E, &gStringVar2);
  StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)"ÎéæâÙØ");
  DisplayCannotUseItemMessage(v1, &gStringVar4, sub_80A6574, 1);
  sub_80A3D5C(v1);
  return v3;
}
