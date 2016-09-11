int DisableSerial()
{
  int v1; // [sp+0h] [bp-10h]@1
  int v2; // [sp+Ch] [bp-4h]@1

  gLinkSavedIme = v4000208;
  v4000200 &= 0xFF3Fu;
  v4000128 = 0;
  v400010E = 0;
  v4000202 = 192;
  v1 = 0;
  CpuSet(&v1, &gLink, 83887088);
  return v2;
}
