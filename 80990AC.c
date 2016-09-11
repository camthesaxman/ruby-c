signed int sub_80990AC()
{
  int v0; // r0@9

  if ( v2001172 )
    --v2001172;
  if ( v200117C == 1 )
  {
    v2001174 += v2001176;
    v2001178 += (unsigned __int8)sub_8098EE0(v200117A, v2001172, v2001176);
    if ( (v200117B <= 0 || v200117A != 5) && (v200117B >= 0 || v200117A) )
    {
      v200117A += v200117B;
      v200117C = 0;
    }
    else
    {
      ++v200117C;
    }
  }
  else if ( (signed int)v200117C > 1 )
  {
    if ( v200117C != 2 )
      return 0;
    if ( !v2001178 )
    {
      ++v2001172;
      return 0;
    }
  }
  else
  {
    if ( v200117C )
      return 0;
    v0 = v2001176 + v2001174;
    v2001174 += v2001176;
    if ( ((v0 - 65) & 0xFFFFu) > 0xBA )
    {
      sub_8098EA0(v200117A);
      v2001174 += 24 * v200117B;
      ++v200117C;
    }
  }
  return 1;
}
