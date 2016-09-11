int sub_8089668()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( byte_3004DD5 )
  {
    if ( byte_3004DD5 == 3 )
    {
      byte_3004DD5 = 0;
      v40000BA &= 0xC5FFu;
      v40000BA &= 0x7FFFu;
      v202FFA4 = 1;
    }
    else
    {
      v40000BA &= 0xC5FFu;
      v40000BA &= 0x7FFFu;
      v40000B0 = dword_3004DC0[(unsigned __int8)byte_3004DD4];
      v40000B4 = dword_3004DC8;
      v40000B8 = dword_3004DCC;
      call_via_r0(dword_3004DD0);
      byte_3004DD4 ^= 1u;
    }
  }
  return v1;
}
