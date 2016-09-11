int sub_80B6958()
{
  int result; // r0@2
  int v1; // [sp+0h] [bp-14h]@1
  char v2; // [sp+4h] [bp-10h]@1
  __int16 v3; // [sp+6h] [bp-Eh]@1

  memcpy(&v1, &gUnknown_083CE2AF, 3);
  sub_80B6858(&v2, &v3);
  if ( *(signed __int16 *)&v2 <= 7 )
    result = 0;
  else
    result = *((_BYTE *)&v1 + v3);
  return result;
}
