int __fastcall DisplayCannotDismountBikeMessage(int a1)
{
  int v1; // r4@1
  _BYTE *v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = (unsigned __int8)a1;
  sub_80A73FC(a1);
  itemid_copy_name(v203855E, &gStringVar1);
  v2 = StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840E7CB);
  sub_80A7590(v2);
  DisplayCannotUseItemMessage(v1, &gStringVar4, sub_80A6024, 1);
  return v4;
}
