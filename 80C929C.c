int __fastcall ItemUseOnFieldCB_Bike(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !(itemid_get_x28(v203855E) << 24) )
    GetOnOffBike(2);
  if ( (unsigned __int8)itemid_get_x28(v203855E) == 1 )
    GetOnOffBike(4);
  sub_8064E2C();
  script_env_2_disable();
  DestroyTask(v1);
  return v3;
}
