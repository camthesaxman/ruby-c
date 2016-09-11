int sub_8135DEC()
{
  int v0; // r7@1
  int v2; // [sp+10h] [bp-4h]@0

  v0 = v20253F8 & 1;
  if ( (unsigned __int8)sub_80A9424(v202540C, 1u) == 1 )
  {
    itemid_copy_name(v202540C, &gStringVar1);
    v202E8DC = 1;
  }
  else
  {
    v202E8DC = 0;
    *(_BYTE *)(v0 + 33707002) = 6;
  }
  return v2;
}
