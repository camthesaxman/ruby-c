signed int sub_80F098C()
{
  signed int result; // r0@2
  int v1; // r0@3

  if ( v2008784
    && (call_via_r2(v200877E, v2008780, *(&gUnknown_083E3270 + v20087CA)), v1 = v2008784 - 1, --v2008784, v1 << 16) )
  {
    ++v200877E;
    if ( v200877E > (signed int)v2008774 )
      v200877E = 0;
    v2008780 = (v2008780 + 2) & 0x1F;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
