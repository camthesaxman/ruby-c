int sub_80965F8()
{
  int v0; // r1@1
  int v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = v2038478 + 572;
  LOBYTE(v1) = *(_BYTE *)(v2038478 + 572) + 1;
  *(_BYTE *)(v2038478 + 572) = v1;
  v1 = (unsigned __int8)v1;
  if ( (unsigned __int8)v1 > 0xDu )
  {
    v1 = v2038478 + 572;
    v0 = 0;
    *(_BYTE *)(v2038478 + 572) = 0;
  }
  sub_809665C(v1, v0);
  return v3;
}
