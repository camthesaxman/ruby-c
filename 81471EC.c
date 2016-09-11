int sub_81471EC()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( !(unsigned __int8)UpdatePaletteFade() )
  {
    if ( dword_3005EBC )
    {
      SetMainCallback2(dword_3005EBC);
      dword_3005EBC = 0;
    }
    else
    {
      DoSoftReset();
    }
  }
  return v1;
}
