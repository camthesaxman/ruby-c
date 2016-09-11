int sub_80543E8()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( dword_300485C )
    call_via_r0(dword_300485C);
  else
    mapldr_default();
  dword_300485C = 0;
  return v1;
}
