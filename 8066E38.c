int s5A_face_player()
{
  int *v0; // r4@1
  unsigned __int8 v1; // r0@2

  v0 = &dword_30048A0[9 * (unsigned __int8)byte_3004AE0];
  if ( *(_BYTE *)v0 << 31 )
  {
    v1 = player_get_direction_lower_nybble();
    FieldObjectFaceOppositeDirection(v0, v1);
  }
  return 0;
}
