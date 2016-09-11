int __fastcall ItemUseOnFieldCB_Rod(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = itemid_get_x28(v203855E);
  StartFishing(v2);
  DestroyTask(v1);
  return v4;
}
