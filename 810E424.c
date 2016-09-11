int sub_810E424()
{
  int v0; // r0@2
  int *v1; // r1@2
  int v3; // [sp+4h] [bp-4h]@0

  if ( (unsigned __int8)FuncIsActiveTask((int)sub_810E468) != 1 )
  {
    v0 = (unsigned __int8)CreateTask((int)sub_810E468, 8);
    v1 = &dword_3004B20[10 * v0];
    *((_WORD *)v1 + 4) = 0;
    *((_WORD *)v1 + 5) = v0;
    *((_WORD *)v1 + 6) = 0;
    *((_WORD *)v1 + 7) = 0;
    *((_WORD *)v1 + 8) = 0;
  }
  return v3;
}
