int __fastcall GetStepInPlaceDelay16AnimId(unsigned __int8 a1)
{
  unsigned int v1; // r4@1
  int v3; // [sp+0h] [bp-10h]@1

  v1 = a1;
  memcpy(&v3, &gUnknown_0837570E, 5);
  if ( v1 > 4 )
    v1 = 0;
  return *((_BYTE *)&v3 + v1);
}
