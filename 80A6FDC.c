int sub_80A6FDC()
{
  char v0; // r0@2
  int v2; // [sp+0h] [bp-4h]@0

  if ( itemid_get_usage(v203855E) << 24 )
  {
    dword_3000704 = (int)&gUnknown_083C1708;
    v0 = 2;
  }
  else
  {
    dword_3000704 = (int)&gUnknown_083C170A;
    v0 = 1;
  }
  v2038564 = v0;
  return v2;
}
