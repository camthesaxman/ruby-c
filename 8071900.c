int sub_8071900()
{
  int v0; // r1@2

  sav12_xor_increment(0);
  if ( v20297EC == 1 )
  {
    v0 = sub_8125D44(4) & 0xFF;
    v20297EC = 0;
  }
  else
  {
    v0 = sub_8125D44(0) & 0xFF;
  }
  if ( v0 == 1 )
    sub_8071684((unsigned __int8 *)&gUnknown_081C6D05, (int)sub_8071960);
  else
    sub_8071684((unsigned __int8 *)"อีู๊", (int)sub_80719AC);
  sub_8071724();
  return 0;
}
