int sub_80A7768()
{
  void *v0; // r3@6
  int v2; // [sp+4h] [bp-4h]@0

  if ( v2038550 == 2 )
  {
    if ( v2038551 )
    {
      if ( v2038552 == 1 )
      {
        if ( v2038551 == 1 )
          v0 = sub_80A4B90(v203855E);
        else
          v0 = *(&gUnknown_083C1640 + 2 * *(_BYTE *)(v2038551 + dword_3000704 - 1));
        MenuPrint((int)v0, 6 * ((v2038551 - 1) >> 1) + 1, 2 * ((v2038551 - 1) & 1) + 8);
      }
      else
      {
        MenuPrint(
          (int)*(&gUnknown_083C1640 + 2 * *(_BYTE *)(v2038551 + dword_3000704 - 1)),
          7,
          v2038553 + 2 * (v2038551 - 1) + 1);
      }
      if ( v2038551 == v2038564 )
      {
        v2038550 = 0;
        sub_80A7970();
      }
    }
    ++v2038551;
  }
  return v2;
}
