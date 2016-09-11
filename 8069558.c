int __fastcall activate_per_step_callback(unsigned __int8 a1)
{
  unsigned int v1; // r4@1
  int v2; // r1@1
  char *v3; // r1@2
  _WORD *v4; // r0@2
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)FindTaskIdByFunc(task_per_step_callback_manager);
  if ( v2 != 255 )
  {
    v3 = (char *)&unk_3004B28 + 40 * v2;
    v4 = v3 + 30;
    do
    {
      *v4 = 0;
      --v4;
    }
    while ( (signed int)v4 >= (signed int)v3 );
    if ( v1 <= 7 )
      *(_WORD *)v3 = v1;
    else
      *(_WORD *)v3 = 0;
  }
  return v6;
}
