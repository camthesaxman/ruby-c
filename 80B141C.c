int __fastcall sub_80B141C(unsigned __int8 a1, unsigned int a2)
{
  int v3; // [sp+0h] [bp-4h]@0

  a2 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 <= 0x3Bu )
  {
    if ( a2 <= 0x27 )
    {
      if ( a2 <= 0x1D )
      {
        if ( a2 <= 0x13 )
        {
          if ( a2 > 9 )
            sub_80B13EC(a1, 49);
        }
        else
        {
          sub_80B13EC(a1, 50);
        }
      }
      else
      {
        sub_80B13EC(a1, 51);
      }
    }
    else
    {
      sub_80B13EC(a1, 52);
    }
  }
  else
  {
    sub_80B13EC(a1, 53);
  }
  return v3;
}
