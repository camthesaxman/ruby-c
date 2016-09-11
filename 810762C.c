int sub_810762C()
{
  int v1; // [sp+8h] [bp-4h]@0

  *(_BYTE *)(v2016801 + 0x2016804) += *(_BYTE *)(v2039238 + 1);
  if ( (signed int)*(_BYTE *)(v2016801 + 0x2016804) < 0 )
    *(_BYTE *)(v2016801 + 0x2016804) = 0;
  v2039238 += 2;
  return v1;
}
