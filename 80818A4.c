int sub_80818A4()
{
  _BYTE *v0; // r1@1
  signed __int16 v1; // r0@2
  int v3; // [sp+0h] [bp-4h]@0

  v0 = &byte_3004B28[40 * (unsigned __int8)CreateTask((int)sub_80816A8, 80)];
  if ( v202E8DC )
  {
    if ( v202E8DC == 1 )
    {
      *((_WORD *)v0 + 1) = 1;
      v1 = 104;
    }
    else
    {
      *((_WORD *)v0 + 1) = v202E8DC != 2;
      v1 = 120;
    }
  }
  else
  {
    *((_WORD *)v0 + 1) = v202E8DC;
    v1 = 104;
  }
  *((_WORD *)v0 + 2) = v1;
  *((_WORD *)v0 + 3) = 80;
  return v3;
}
