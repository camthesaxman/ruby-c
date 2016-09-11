int __fastcall ItemUseOutOfBattle_Repel(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( VarGet(16417) << 16 )
  {
    DisplayItemMessageOnField(v1, &gUnknown_0840EA61, sub_80A5C48, 1);
  }
  else
  {
    v2 = itemid_get_quality(v203855E);
    VarSet(0x4021u, v2);
    sub_80C9FDC();
    DisplayItemMessageOnField(v1, &gStringVar4, sub_80A5C48, 1);
  }
  return v4;
}
