int __fastcall GetStepInPlaceDelay32AnimId(unsigned __int8 a1)
{
  unsigned int v1; // r4@1
  int v3; // [sp+0h] [bp-10h]@1

  v1 = a1;
  memcpy(&v3, &gUnknown_08375709, 5);
  if ( v1 > 4 )
    v1 = 0;
  return *((_BYTE *)&v3 + v1);
}