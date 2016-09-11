int sub_8093324()
{
  int *v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = &dword_3004B20[10 * (unsigned __int8)FindTaskIdByFunc((int)nullsub_60)];
  v2000001 = *((_WORD *)v0 + 4);
  LoadWordFromTwoHalfwords((int)(v0 + 3), (int *)0x2000060);
  if ( v2000001 )
    memcpy(33554532, 56 * *((_WORD *)v0 + 5) + 33750976, 56);
  else
    sub_8093390(33554532);
  return v2;
}
