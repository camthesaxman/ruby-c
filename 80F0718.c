signed int sub_80F0718()
{
  __int16 v0; // r2@2
  signed int result; // r0@3

  if ( sub_80F098C() << 24 )
    goto LABEL_9;
  v0 = v200877C;
  if ( !v200877C )
    return 0;
  v200877C -= v200877A;
  v2008776 = (v200877A + v2008776) & 0xFF;
  v400001E = v2008776;
  if ( v0 != v200877A )
  {
LABEL_9:
    result = 1;
  }
  else
  {
    v2008778 = ((v2008776 + 8) & 0xFF) >> 3;
    result = 0;
  }
  return result;
}
